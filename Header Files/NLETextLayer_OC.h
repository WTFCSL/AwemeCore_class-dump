//
//     Generated by private class-dump
//

@class NSString, NLEResource_OC, UIColor;

@interface NLETextLayer_OC : NLELayer_OC {
    NLEResource_OC *_styleFont;
    struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *__ptr_; struct __shared_weak_count *__cntrl_; } _cppTextLayer;
}

@property (nonatomic) struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppTextLayer;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long fontSize;
@property (retain, nonatomic) NLEResource_OC *fontResource;
@property (nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) NLEResource_OC *styleFont;
@property (nonatomic) double bend;
@property (nonatomic) double bendOffset;
@property (nonatomic) double maxLineWidth;
@property (nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL outline;
@property (nonatomic) double outlineWidth;
@property (nonatomic) UIColor *outlineColor;
@property (nonatomic) long long alignType;

- (void)setAlignType:(long long)arg0;
- (long long)alignType;
- (void)setCppTextLayer:(struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *x0; struct __shared_weak_count *x1; })cppTextLayer;
- (id)initWithId:(id)arg0 text:(id)arg1;
- (id)initWithCPPTextLayer:(struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *x0; struct __shared_weak_count *x1; })arg0;
- (id)fontResource;
- (void)setFontResource:(id)arg0;
- (id)getStyleFont;
- (void)setBend:(double)arg0;
- (double)bendOffset;
- (void)setBendOffset:(double)arg0;
- (void)setMaxLineWidth:(double)arg0;
- (id)styleFont;
- (void)setStyleFont:(id)arg0;
- (double)maxLineWidth;
- (void)setForegroundColor:(id)arg0;
- (id)foregroundColor;
- (void).cxx_destruct;
- (void)setFontSize:(long long)arg0;
- (void)setText:(id)arg0;
- (long long)fontSize;
- (BOOL)outline;
- (id)text;
- (void)setFont:(id)arg0;
- (id)backgroundColor;
- (id).cxx_construct;
- (void)setBackgroundColor:(id)arg0;
- (void)setOutline:(BOOL)arg0;
- (void)setOutlineColor:(id)arg0;
- (id)outlineColor;
- (double)outlineWidth;
- (void)setOutlineWidth:(double)arg0;
- (double)bend;

@end
