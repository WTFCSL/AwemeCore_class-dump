//
//     Generated by private class-dump
//

@class UIColor;

@interface NLETextParam_OC : NSObject {
    struct shared_ptr<nleimage_api::TextParam> { struct TextParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppTextParam;
}

@property (nonatomic) struct shared_ptr<nleimage_api::TextParam> { struct TextParam *__ptr_; struct __shared_weak_count *__cntrl_; } cppTextParam;
@property (nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL outline;
@property (nonatomic) double outlineWidth;
@property (nonatomic) UIColor *outlineColor;
@property (nonatomic) long long alignType;

- (void)setAlignType:(long long)arg0;
- (long long)alignType;
- (id)getStyleFont;
- (void)setStyleFont:(id)arg0;
- (void)setCppTextParam:(struct shared_ptr<nleimage_api::TextParam> { struct TextParam *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nleimage_api::TextParam> { struct TextParam *x0; struct __shared_weak_count *x1; })cppTextParam;
- (id)initWithCPPTextParam:(struct shared_ptr<nleimage_api::TextParam> { struct TextParam *x0; struct __shared_weak_count *x1; })arg0;
- (id)getForegroundColor;
- (void)setForegroundColor:(id)arg0;
- (void).cxx_destruct;
- (BOOL)outline;
- (void)setFont:(id)arg0;
- (id)backgroundColor;
- (id).cxx_construct;
- (void)setBackgroundColor:(id)arg0;
- (void)setOutline:(BOOL)arg0;
- (void)setOutlineColor:(id)arg0;
- (id)outlineColor;
- (double)outlineWidth;
- (void)setOutlineWidth:(double)arg0;
- (id)getFont;

@end