//
//     Generated by private class-dump
//

@class AWEPOIDetailInfoRateCardCellViewModel;

@interface AWEPOIDetailNGPOICommentCardComponentViewModel : DitoComponentViewModel {
    BOOL _isClose;
    BOOL _showCommentBar;
    AWEPOIDetailInfoRateCardCellViewModel *_bizViewModel;
}

@property (nonatomic) BOOL isClose;
@property (nonatomic) BOOL showCommentBar;
@property (retain, nonatomic) AWEPOIDetailInfoRateCardCellViewModel *bizViewModel;

- (BOOL)isClose;
- (void)setIsClose:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)didLoadPageModel:(id)arg0;
- (void)componentViewWillShow;
- (id)bizViewModel;
- (void)setBizViewModel:(id)arg0;
- (void)setupBizViewModel;
- (BOOL)showCommentBar;
- (void)setShowCommentBar:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;

@end
