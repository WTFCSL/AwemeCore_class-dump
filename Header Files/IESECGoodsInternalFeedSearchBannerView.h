//
//     Generated by private class-dump
//

@class UIImageView, IESECFeedSearchWordModel, UILabel, UIView;

@interface IESECGoodsInternalFeedSearchBannerView : UIView {
    UIView *_searchView;
    UIImageView *_searchIcon;
    UILabel *_topicLabel;
    UILabel *_searchLabel;
    UIImageView *_rightIcon;
    IESECFeedSearchWordModel *_model;
}

@property (retain, nonatomic) UIView *searchView;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UILabel *searchLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) IESECFeedSearchWordModel *model;

- (void)setupUIWithModel:(id)arg0;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg0;
- (void)setSearchLabel:(id)arg0;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg0;
- (void)setRightIcon:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)searchLabel;
- (id)rightIcon;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end
