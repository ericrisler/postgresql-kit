
#import <Cocoa/Cocoa.h>
#import <PGServerKit/PGServerKit.h>
#import <PGClientKit/PGClientKit.h>

#import "ConnectionPrefs.h"
#import "ConfigurationPrefs.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
	PGConnection* _connection;
}

@property (readonly) PGServer* server;
@property (readonly) PGConnection* connection;

@property (assign) IBOutlet NSWindow* ibWindow;
@property (assign) IBOutlet NSTextView* ibLogTextView;
@property (assign) IBOutlet ConnectionPrefs* ibConnectionPrefs;
@property (assign) IBOutlet ConfigurationPrefs* ibConfigurationPrefs;
@property (assign) IBOutlet NSToolbarItem* ibToolbarItemConnection;
@property (assign) IBOutlet NSToolbarItem* ibToolbarItemConfiguration;
@property BOOL ibStartButtonEnabled;
@property BOOL ibStopButtonEnabled;
@property BOOL ibBackupButtonEnabled;
@property NSImage* ibServerStatusIcon;
@property NSString* ibServerVersion;
@property NSDate* terminateRequested;

// methods
-(void)stopServer;
-(void)restartServer;

@end

@interface NSObject (AppDelegate)
-(void)restartServer;
-(void)reloadServer;
@end

