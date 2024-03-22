//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveAnchorOrderLimitContentModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSString *_textColor;
    double _textFont;
    NSString *_jumpURL;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double textFont;
@property (copy, nonatomic) NSString *jumpURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (double)textFont;
- (id)textColor;
- (void)setTextFont:(double)arg0;

@end