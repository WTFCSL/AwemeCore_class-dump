//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDTuringAlertOption : NSObject {
    NSString *_title;
    NSDictionary *_optionDictionary;
    id /* block */ _callback;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *optionDictionary;
@property (copy) id /* block */ callback;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *optionDictionary;
@property (copy, nonatomic) id /* block */ callback;

+ (id)optionsWithArray:(id)arg0 callback:(id /* block */)arg1;

- (id)optionDictionary;
- (void)setOptionDictionary:(id)arg0;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)triggerAction;

@end
