//
//     Generated by private class-dump
//

@class NSString, AWEDetailURLModel, UIImage;

@interface AWEDetailActivityLinkModel : AWEDetailCommonDiffableModel <AWEDetailRoutable, AWEDetailLinkModel> {
    BOOL _isShowingConfiguredActivity;
    double _topInset;
    double _bottomInset;
    NSString *_displayText;
    NSString *_webTitle;
    NSString *_webURL;
    AWEDetailURLModel *_iconURLModel;
}

@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *webURL;
@property (retain, nonatomic) AWEDetailURLModel *iconURLModel;
@property (nonatomic) BOOL isShowingConfiguredActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (readonly, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *displayText;

- (void)setWebTitle:(id)arg0;
- (id)webTitle;
- (id)iconURLModel;
- (void)setIconURLModel:(id)arg0;
- (id)routeURLString;
- (BOOL)isShowingConfiguredActivity;
- (void)setIsShowingConfiguredActivity:(BOOL)arg0;
- (void)setTopInset:(double)arg0;
- (id)iconImage;
- (double)topInset;
- (void).cxx_destruct;
- (double)bottomInset;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)displayText;
- (void)setBottomInset:(double)arg0;
- (void)setDisplayText:(id)arg0;

@end
