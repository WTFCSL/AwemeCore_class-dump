//
//     Generated by private class-dump
//

@class NSString, UIView, NSIndexPath, YYLabel;
@protocol AWEHotSpotBarrageTableViewCellDelegate;

@interface AWEHotSpotBarrageHeaderCell : UITableViewCell <AWEHotSpotBarrageTableViewCellProtocol> {
    long long backgroundViewType;
    id<AWEHotSpotBarrageTableViewCellDelegate> delegate;
    UIView *_container;
    YYLabel *_aboutLabel;
    YYLabel *_titleLabel;
    YYLabel *_subDiscripLabel;
    UIView *_lineView;
    NSString *_sourceText;
    NSIndexPath *_indexPath;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) YYLabel *aboutLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *subDiscripLabel;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) NSString *sourceText;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long backgroundViewType;
@property (weak, nonatomic) id<AWEHotSpotBarrageTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)awe_cellHeightWithText:(id)arg0 indexPath:(id)arg1;
+ (id)awe_reuseIdentifier;
+ (id)generateAttributeStringWithText:(id)arg0 attributes:(id)arg1;
+ (double)cellHeightWithText:(id)arg0 indexPath:(id)arg1;
+ (id)reuseIdentifier;

- (void)awe_configWithText:(id)arg0 indexPath:(id)arg1;
- (void)setBackgroundViewType:(long long)arg0;
- (void)p_setupBasicUI;
- (id)aboutLabel;
- (id)subDiscripLabel;
- (long long)backgroundViewType;
- (void)configWithText:(id)arg0 indexPath:(id)arg1;
- (void)setAboutLabel:(id)arg0;
- (void)setSubDiscripLabel:(id)arg0;
- (id)container;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)titleLabel;
- (id)indexPath;
- (id)delegate;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)awakeFromNib;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)sourceText;
- (void)setSourceText:(id)arg0;

@end