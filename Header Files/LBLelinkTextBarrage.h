//
//     Generated by private class-dump
//

@class NSString, UIColor;

@interface LBLelinkTextBarrage : NSObject {
    NSString *_text;
    unsigned long long _fontSize;
    UIColor *_textColor;
    NSString *_danmukuId;
    long long _displayTime;
    long long _barrageId;
    long long _margin;
    unsigned long long _delayTime;
    long long _userId;
    unsigned long long _type;
    UIColor *_textEdgeColor;
    UIColor *_underlineColor;
    UIColor *_borderColor;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long fontSize;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *danmukuId;
@property (nonatomic) long long displayTime;
@property (nonatomic) long long barrageId;
@property (nonatomic) long long margin;
@property (nonatomic) unsigned long long delayTime;
@property (nonatomic) long long userId;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIColor *textEdgeColor;
@property (retain, nonatomic) UIColor *underlineColor;
@property (retain, nonatomic) UIColor *borderColor;

- (void)setDefaultParam;
- (void)setTextEdgeColor:(id)arg0;
- (id)danmukuId;
- (void)setDanmukuId:(id)arg0;
- (long long)barrageId;
- (void)setBarrageId:(long long)arg0;
- (id)textEdgeColor;
- (long long)margin;
- (id)init;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setFontSize:(unsigned long long)arg0;
- (void)setText:(id)arg0;
- (void)setBorderColor:(id)arg0;
- (unsigned long long)fontSize;
- (unsigned long long)type;
- (long long)userId;
- (void)setDelayTime:(unsigned long long)arg0;
- (unsigned long long)delayTime;
- (void)setType:(unsigned long long)arg0;
- (void)setMargin:(long long)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (void)setUserId:(long long)arg0;
- (id)textColor;
- (long long)displayTime;
- (id)underlineColor;
- (void)setUnderlineColor:(id)arg0;
- (void)setDisplayTime:(long long)arg0;

@end
