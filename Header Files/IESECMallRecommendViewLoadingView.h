//
//     Generated by private class-dump
//

@class UILabel, IESECActionLoadingView, NSString;

@interface IESECMallRecommendViewLoadingView : UIView <IESECMallLoadingViewProtocol> {
    BOOL _isBlack;
    IESECActionLoadingView *_loadingView;
    UILabel *_title;
}

@property (retain, nonatomic) IESECActionLoadingView *loadingView;
@property (retain, nonatomic) UILabel *title;
@property (nonatomic) BOOL isBlack;
@property (nonatomic) BOOL canShowMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlack:(BOOL)arg0;
- (void)setIsBlack:(BOOL)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)isBlack;

@end
