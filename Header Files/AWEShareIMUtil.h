//
//     Generated by private class-dump
//

@interface AWEShareIMUtil : NSObject

+ (id)putNormalShareModelAtTheTopWithShareList:(id)arg0;
+ (id)getDisplayNameWith:(id)arg0 maxLength:(double)arg1 maxHeight:(double)arg2 displayName:(id)arg3;
+ (BOOL)isSuccessOrSelfSeeWhenPostIM;
+ (void)shareToUserWithCrateGroup:(BOOL)arg0 shareContext:(id)arg1 selectUsers:(id)arg2 text:(id)arg3 completion:(id /* block */)arg4;
+ (void)shareToUserWithContext:(id)arg0 shareUsers:(id)arg1 text:(id)arg2 isGroupShare:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)finishShareVideoForActivityWithUsers:(id)arg0;

@end