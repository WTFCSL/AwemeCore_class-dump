//
//     Generated by private class-dump
//

@interface LynxTextAttachmentInfo : NSObject {
    BOOL _nativeAttachment;
    long long _sign;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (readonly, nonatomic) long long sign;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL nativeAttachment;

- (long long)sign;
- (id)initWithSign:(long long)arg0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (BOOL)nativeAttachment;
- (void)setNativeAttachment:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end
