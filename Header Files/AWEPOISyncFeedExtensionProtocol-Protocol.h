//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPOISyncFeedExtensionDelegateProtocol;

@protocol AWEPOISyncFeedExtensionProtocol <NSObject>

@property (weak, nonatomic) id<AWEPOISyncFeedExtensionDelegateProtocol> delegate;
@property (nonatomic) BOOL isTransitionUpdating;
@property (copy, nonatomic) NSString *enterNodeTag;

- (id)generateFeedVCWithEnterNodeTag:(id)arg0 referString:(id)arg1 enterFrom:(id)arg2 logExtraDict:(id)arg3 didLoadDataBlock:(id /* block */)arg4;
- (void)transferToViewController:(id)arg0 transitionClassName:(id)arg1;
- (BOOL)isTransitionUpdating;
- (void)setIsTransitionUpdating:(BOOL)arg0;
- (id)enterNodeTag;
- (void)setEnterNodeTag:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;

@end
