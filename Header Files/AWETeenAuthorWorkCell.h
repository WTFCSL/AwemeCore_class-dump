//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIImageView, AWETeenHotSpotListLabel, AWEGradientView, UILabel, AWETeenJustSeenMaskView;

@interface AWETeenAuthorWorkCell : UICollectionViewCell {
    unsigned long long _workType;
    AWEAwemeModel *_awemeModel;
    UIImageView *_workImageView;
    AWEGradientView *_bottomMaskView;
    UIImageView *_likeImageView;
    UILabel *_likeNumLabel;
    AWETeenHotSpotListLabel *_hotSpotLabel;
    AWETeenJustSeenMaskView *_justSeenMaskView;
    AWEGradientView *_dateMaskView;
    UILabel *_createTimeLabel;
    UIImageView *_imageIconView;
}

@property (retain, nonatomic) UIImageView *workImageView;
@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumLabel;
@property (retain, nonatomic) AWETeenHotSpotListLabel *hotSpotLabel;
@property (retain, nonatomic) AWETeenJustSeenMaskView *justSeenMaskView;
@property (retain, nonatomic) AWEGradientView *dateMaskView;
@property (retain, nonatomic) UILabel *createTimeLabel;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (nonatomic) unsigned long long workType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)p_setupUI;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg0;
- (id)likeImageView;
- (void)setLikeImageView:(id)arg0;
- (id)dateMaskView;
- (void)setDateMaskView:(id)arg0;
- (id)createTimeLabel;
- (void)setCreateTimeLabel:(id)arg0;
- (id)hotSpotLabel;
- (void)setHotSpotLabel:(id)arg0;
- (void)configWithShowJustSeen:(BOOL)arg0 showHotLabel:(BOOL)arg1 workType:(unsigned long long)arg2 awemeModel:(id)arg3;
- (id)imageIconView;
- (void)setImageIconView:(id)arg0;
- (id)justSeenMaskView;
- (void)setJustSeenMaskView:(id)arg0;
- (void)setWorkType:(unsigned long long)arg0;
- (id)workImageView;
- (id)likeNumLabel;
- (void)setLikeNumLabel:(id)arg0;
- (unsigned long long)workType;
- (void)setWorkImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
