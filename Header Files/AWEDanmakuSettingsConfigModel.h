//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDanmakuSettingsConfigModel : NSObject {
    NSString *_title;
    NSString *_info;
    long long _pointCount;
    double _valuePercent;
    long long _index;
    unsigned long long _danmakuScene;
    id /* block */ _responseContinueValueBlock;
    id /* block */ _responseDiscreteValueBlock;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *info;
@property (nonatomic) long long pointCount;
@property (nonatomic) double valuePercent;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long danmakuScene;
@property (copy, nonatomic) id /* block */ responseContinueValueBlock;
@property (copy, nonatomic) id /* block */ responseDiscreteValueBlock;

- (void)setDanmakuScene:(unsigned long long)arg0;
- (unsigned long long)danmakuScene;
- (double)valuePercent;
- (id /* block */)responseDiscreteValueBlock;
- (id /* block */)responseContinueValueBlock;
- (void)setValuePercent:(double)arg0;
- (void)setResponseContinueValueBlock:(id /* block */)arg0;
- (void)setResponseDiscreteValueBlock:(id /* block */)arg0;
- (void)setIndex:(long long)arg0;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (id)title;
- (long long)index;
- (void)setTitle:(id)arg0;
- (long long)pointCount;
- (void)setPointCount:(long long)arg0;

@end
