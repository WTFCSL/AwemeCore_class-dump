//
//     Generated by private class-dump
//

@class IESECSliceXFlex, NSString;

@interface IESECSliceXBaseLabel : UILabel <IESECSliceXFlexProtocol>

@property (readonly, nonatomic) IESECSliceXFlex *flex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (id)flex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didAddSubview:(id)arg0;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end
