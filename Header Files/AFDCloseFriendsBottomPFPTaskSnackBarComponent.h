//
//     Generated by private class-dump
//

@class AFDSnackBarCustomView, NSString, AFDSnackBar;

@interface AFDCloseFriendsBottomPFPTaskSnackBarComponent : AFDCloseFriendsBottomBaseComponent <AFDElementHostLifeCycle> {
    AFDSnackBar *_pfpTaskFinishSnackBar;
    AFDSnackBarCustomView *_pfpTaskFinishSnackBarView;
}

@property (retain, nonatomic) AFDSnackBar *pfpTaskFinishSnackBar;
@property (retain, nonatomic) AFDSnackBarCustomView *pfpTaskFinishSnackBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)elementDidLoad;
- (void)setupBinding;
- (void)showPFPTaskFinishSnackBar;
- (void)dismissPFPTaskFinishSnackBar;
- (id)pfpTaskFinishSnackBar;
- (id)pfpTaskFinishSnackBarView;
- (void)didTapPFPTaskFinishSnackBar;
- (void)setPfpTaskFinishSnackBar:(id)arg0;
- (void)setPfpTaskFinishSnackBarView:(id)arg0;
- (void).cxx_destruct;

@end