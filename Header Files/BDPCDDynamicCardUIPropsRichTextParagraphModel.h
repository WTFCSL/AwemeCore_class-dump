//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDPCDDynamicCardUIPropsRichTextParagraphModel : BDPCDDynamicCardUIPropsModel <BDPCDDynamicCardUITextParagraphProtocol> {
    long long _aligntype;
    long long _maxLine;
    NSArray *_padding;
    NSArray *_margin;
}

@property (nonatomic) long long aligntype;
@property (nonatomic) long long maxLine;
@property (copy, nonatomic) NSArray *padding;
@property (copy, nonatomic) NSArray *margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)maxLine;
- (void)setMaxLine:(long long)arg0;
- (long long)aligntype;
- (void)setAligntype:(long long)arg0;
- (id)margin;
- (void)setPadding:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (void)setMargin:(id)arg0;
- (id)padding;

@end
