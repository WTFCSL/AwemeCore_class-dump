//
//     Generated by private class-dump
//

@protocol AFDFavoriteTipsManagerProtocol <NSObject>

+ (id)sharedInstance;

@property (nonatomic) BOOL shouldNotLandscape;

- (void)dismissSnackBar;
- (void)didEndDisplayAwemeModel:(id)arg0;
- (void)setShouldNotLandscape:(BOOL)arg0;
- (void)showSnackBarWithModel:(id)arg0 tapAction:(id /* block */)arg1 extraInfo:(id)arg2 barBottomPadding:(double)arg3;
- (void)showSnackBarWithModel:(id)arg0 tapAction:(id /* block */)arg1 extraInfo:(id)arg2;
- (BOOL)shouldNotLandscape;

@end