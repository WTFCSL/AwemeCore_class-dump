//
//     Generated by private class-dump
//

@protocol AWEUGPendantUICreaterService <HTSService>

+ (void)removeBubbleView:(id)arg0;
+ (id)createPendantContentViewWithUIInfo:(id)arg0;
+ (void)updatePendantContentViewWithUIInfo:(id)arg0 contentView:(id)arg1;
+ (id)createPendantCloseViewWithUIInfo:(id)arg0;
+ (void)updatePendantCloseViewWithUIInfo:(id)arg0 closeButton:(id)arg1;
+ (id)createPendantCapsuleWithUIInfo:(id)arg0;
+ (void)updatePendantCapsuleWithUIInfo:(id)arg0 capsule:(id)arg1;
+ (id)createPendantCountDownViewWithUIInfo:(id)arg0;
+ (void)updatePendantCountDownViewWithUIInfo:(id)arg0 capsule:(id)arg1;
+ (id)createPendantProgressWithUIInfo:(id)arg0;
+ (id)createPendantProgressWithUIInfo:(id)arg0 type:(unsigned long long)arg1;
+ (void)updatePendantProgressWithUIInfo:(id)arg0 progressView:(id)arg1;
+ (id)createPendantBubbleViewWithUIInfo:(id)arg0 contentView:(id)arg1 cotainerView:(id)arg2 isRightSide:(BOOL)arg3 isEdged:(BOOL)arg4 completion:(id /* block */)arg5;

@end
