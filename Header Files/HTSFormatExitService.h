//
//     Generated by private class-dump
//

@class HTSFormatExitContext, HTSFormatCloseApi, AWEFormatStore, NSString, UIViewController;

@interface HTSFormatExitService : NSObject <HTSFormatExitService> {
    AWEFormatStore *_formatStore;
    UIViewController *_formatViewController;
    HTSFormatExitContext *_ongoingContext;
    HTSFormatCloseApi *_closeApi;
}

@property (weak, nonatomic) AWEFormatStore *formatStore;
@property (weak, nonatomic) UIViewController *formatViewController;
@property (retain, nonatomic) HTSFormatExitContext *ongoingContext;
@property (retain, nonatomic) HTSFormatCloseApi *closeApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)closeFormatRoomWithType:(unsigned long long)arg0;
- (id)initWithFormatStore:(id)arg0 formatViewController:(id)arg1;
- (void)processExitRoomWithContext:(id)arg0;
- (id)ongoingContext;
- (BOOL)checkCanExitFormatRoom:(id)arg0;
- (void)popIfNeeded:(id)arg0;
- (void)willExitRoomWithContext:(id)arg0;
- (void)setOngoingContext:(id)arg0;
- (void)formatFinishedWithContext:(id)arg0;
- (void)formatDidCloseWithContext:(id)arg0;
- (void)prepareForCloseWithContext:(id)arg0;
- (id)formatStore;
- (id)formatViewController;
- (id)closeApi;
- (void)setFormatStore:(id)arg0;
- (void)setFormatViewController:(id)arg0;
- (void)setCloseApi:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isExiting;

@end