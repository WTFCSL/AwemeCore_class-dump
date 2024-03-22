//
//     Generated by private class-dump
//

@class NSString;

@interface VEAlgorithmSessionCodeItem : NSObject {
    NSString *_content;
    unsigned long long _codeType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _position;
}

@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } position;
@property (nonatomic) unsigned long long codeType;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })position;
- (void)setPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (unsigned long long)codeType;
- (void)setCodeType:(unsigned long long)arg0;

@end