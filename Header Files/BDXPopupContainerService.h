//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol BDXDisableSwipeServiceProtocol;

@interface BDXPopupContainerService : NSObject <BDXPopupContainerServiceProtocol> {
    id<BDXDisableSwipeServiceProtocol> _disableSwipeDelegate;
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) NSMutableArray *stack;
@property (retain, nonatomic) id<BDXDisableSwipeServiceProtocol> disableSwipeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)create:(id)arg0 context:(id)arg1;
- (id)open:(id)arg0 context:(id)arg1;
- (id)disableSwipeDelegate;
- (void)setDisableSwipeDelegate:(id)arg0;
- (id /* block */)completeWithAnimationBlockConfig:(id)arg0;
- (id)popupWithContainerID:(id)arg0;
- (void)closePopup:(id)arg0 animated:(BOOL)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)closePopup:(id)arg0 animated:(BOOL)arg1 params:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)stack;

@end
