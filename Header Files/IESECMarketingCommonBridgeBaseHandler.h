//
//     Generated by private class-dump
//

@class NSString;

@interface IESECMarketingCommonBridgeBaseHandler : NSObject {
    BOOL _needAddBtmToken;
    NSString *_action;
}

@property (copy, nonatomic) NSString *action;
@property (nonatomic) BOOL needAddBtmToken;

- (void)callWithPage:(id)arg0 rit:(id)arg1 component:(id)arg2 params:(id)arg3 data:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)needAddBtmToken;
- (void)setNeedAddBtmToken:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setAction:(id)arg0;
- (id)action;

@end
