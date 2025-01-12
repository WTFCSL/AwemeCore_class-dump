//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEDataFreeModel : NSObject {
    NSString *_buttonTitle;
    long long _showTime;
    NSNumber *_experiments;
    NSString *_schema;
    id /* block */ _actionBlock;
}

@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) long long showTime;
@property (nonatomic) NSNumber *experiments;
@property (retain, nonatomic) NSString *schema;
@property (copy, nonatomic) id /* block */ actionBlock;

- (long long)showTime;
- (void)setShowTime:(long long)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)experiments;
- (id)buttonTitle;
- (id /* block */)actionBlock;
- (void)setExperiments:(id)arg0;
- (id)schema;
- (void)setButtonTitle:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;

@end
