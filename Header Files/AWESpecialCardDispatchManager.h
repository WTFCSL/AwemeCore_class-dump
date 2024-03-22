//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol AWESpecialCardDelegateCallProtocol;

@interface AWESpecialCardDispatchManager : NSObject {
    id<AWESpecialCardDelegateCallProtocol> _dispatchController;
    NSMutableArray *_cardProxyArray;
}

@property (retain, nonatomic) NSMutableArray *cardProxyArray;
@property (weak, nonatomic) id<AWESpecialCardDelegateCallProtocol> dispatchController;

- (id)dispatchController;
- (void)setDispatchController:(id)arg0;
- (void)registerCardController:(id)arg0;
- (id)getCardProxyWithBusinessID:(id)arg0;
- (id)cardProxyArray;
- (void)setCardProxyArray:(id)arg0;
- (void).cxx_destruct;

@end