//
//     Generated by private class-dump
//

@class _TtC21AWEMusicStreamingImpl16BNCycleLoopLabel;

@interface AWEMusicStreamingImpl.LunaPlayTitleView : UIView {
    void /* unknown type, empty encoding */ vipIconWidth;
    void /* unknown type, empty encoding */ vipIconLeftMargin;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ showVipIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_vipIcon;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ showVipIcon;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16BNCycleLoopLabel *titleLabel;

- (BOOL)showVipIcon;
- (void)setShowVipIcon:(BOOL)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)initWithCoder:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;

@end
