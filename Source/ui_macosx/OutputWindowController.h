#import <Cocoa/Cocoa.h>

@protocol OutputWindowDelegate

-(void)outputWindowDidResize: (NSSize)size;

@end

@interface OutputWindowController : NSWindowController

@property(assign, nonatomic) IBOutlet NSOpenGLView* openGlView;
@property(assign, nonatomic) id<OutputWindowDelegate> delegate;

-(NSSize)contentSize;

@end
