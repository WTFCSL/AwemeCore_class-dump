//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWEECOMIMEmoticonPackageItem : UICollectionViewCell {
    UIImageView *_emoticonView;
}

@property (retain, nonatomic) UIImageView *emoticonView;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)setEmoticonView:(id)arg0;
- (id)emoticonView;
- (void)reloadItemWithURL:(id)arg0 displayName:(id)arg1 showBkgColor:(BOOL)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
