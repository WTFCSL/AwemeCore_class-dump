//
//     Generated by private class-dump
//

@class UIImage, NSString, AWEURLModel;
@protocol AWENearbyCardModel;

@interface AWENearbyImgAutoScrollModel : NSObject {
    BOOL _showLoadingLabel;
    UIImage *_showImg;
    NSString *_category;
    id<AWENearbyCardModel> _cardModel;
    AWEURLModel *_webImgUrl;
    UIImage *_webImgPlaceholder;
    id /* block */ _adjustUIImageView;
    id /* block */ _webImgeLoadCompleted;
}

@property (retain, nonatomic) UIImage *showImg;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) id<AWENearbyCardModel> cardModel;
@property (nonatomic) BOOL showLoadingLabel;
@property (retain, nonatomic) AWEURLModel *webImgUrl;
@property (retain, nonatomic) UIImage *webImgPlaceholder;
@property (copy, nonatomic) id /* block */ adjustUIImageView;
@property (copy, nonatomic) id /* block */ webImgeLoadCompleted;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)showImg;
- (BOOL)showLoadingLabel;
- (id)webImgUrl;
- (id)webImgPlaceholder;
- (id /* block */)adjustUIImageView;
- (id /* block */)webImgeLoadCompleted;
- (void)setShowImg:(id)arg0;
- (void)setShowLoadingLabel:(BOOL)arg0;
- (void)setWebImgUrl:(id)arg0;
- (void)setWebImgPlaceholder:(id)arg0;
- (void)setAdjustUIImageView:(id /* block */)arg0;
- (void)setWebImgeLoadCompleted:(id /* block */)arg0;
- (id)initWithModel:(id)arg0;
- (id)category;
- (void).cxx_destruct;
- (void)setCategory:(id)arg0;

@end