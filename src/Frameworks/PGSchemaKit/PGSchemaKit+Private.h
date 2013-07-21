

#import "PGSchemaProductNV.h"
#import "PGSchemaProductOp.h"

@interface PGSchemaManager (Private)
+(NSError* )errorWithCode:(PGSchemaErrorType)code description:(NSString* )description path:(NSString* )path;
-(BOOL)_addSearchPath:(NSString* )path;
-(NSArray* )_subpathsAtPath:(NSString* )path;
-(NSArray* )_productsAtPath:(NSString* )path error:(NSError** )error;
-(BOOL)_hasProductTableWithError:(NSError** )error;
-(BOOL)_hasProductInstalled:(PGSchemaProduct* )product error:(NSError** )error;
-(NSArray* )_checkDependentProductsNV:(PGSchemaProductNV *)productnv error:(NSError** )error;
@end

@interface PGSchemaProduct (Private)
-(BOOL)_initWithPath:(NSString* )path error:(NSError** )error;
@property (readonly) PGSchemaProductNV* productnv;
@end
