//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenTimeLockSettingModel : NSObject {
    NSString *_title;
    unsigned long long _time;
    id /* block */ _clickBlock;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long time;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void).cxx_destruct;
- (unsigned long long)time;
- (void)setTime:(unsigned long long)arg0;
- (id)title;
- (void)setTitle:(id)arg0;

@end
