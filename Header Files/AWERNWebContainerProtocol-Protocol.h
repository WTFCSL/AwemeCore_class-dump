//
//     Generated by private class-dump
//

@protocol AWERNWebContainerDelegate;

@protocol AWERNWebContainerProtocol <NSObject>

@property (weak, nonatomic) id<AWERNWebContainerDelegate> delegate;

- (id)contentVC;
- (id)reactContainerID;
- (BOOL)isRN;
- (BOOL)didFallbackInternally;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end