//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface LSIMMessageCardCancelModelButtonItem : NSObject {
    unsigned long long _type;
    NSString *_text;
    NSString *_url;
    NSString *_event;
    NSDictionary *_eventParams;
    NSString *_buttonType;
}

@property (copy, nonatomic) NSString *buttonType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *eventParams;

+ (id)modelCustomPropertyMapper;

- (void)setEventParams:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)buttonType;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (unsigned long long)type;
- (void)setUrl:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (id)text;
- (void)setButtonType:(id)arg0;
- (id)url;
- (id)eventParams;

@end
