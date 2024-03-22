//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;
@protocol ACCVoiceEffectItemProtocol;

@interface ACCVoiceEffectSelectPageCell : UICollectionViewCell {
    BOOL _isCurrent;
    UILabel *_textLabel;
    UIView *_selectedView;
    UIImageView *_loadingView;
    unsigned long long _loadStatus;
    id<ACCVoiceEffectItemProtocol> _item;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) BOOL isCurrent;
@property (retain, nonatomic) id<ACCVoiceEffectItemProtocol> item;

- (void)setSelectedView:(id)arg0;
- (id)createRotationAnimation;
- (void)updateLoadingStatus:(unsigned long long)arg0;
- (void)setupVoiceEffectItem:(id)arg0;
- (void)p_stopDownloadAnimation;
- (void)p_startDownloadAnimation;
- (void)updateSelectStatus:(BOOL)arg0;
- (id)textLabel;
- (id)accessibilityLabel;
- (id)item;
- (BOOL)isCurrent;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)loadStatus;
- (void)setLoadStatus:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void)setItem:(id)arg0;
- (id)accessibilityValue;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setIsCurrent:(BOOL)arg0;
- (id)selectedView;

@end
