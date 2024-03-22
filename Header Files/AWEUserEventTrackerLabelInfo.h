//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEUserEventTrackerLabelInfo : NSObject {
    NSString *_eventName;
    NSString *_label;
    NSString *_value;
    NSString *_extra;
    NSDictionary *_attributes;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *attributes;

+ (id)instanceWithBlock:(id /* block */)arg0;

- (void)setExtra:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (id)attributes;
- (void)setAttributes:(id)arg0;
- (void)setLabel:(id)arg0;
- (void)setEventName:(id)arg0;
- (id)extra;
- (id)initWithBlock:(id /* block */)arg0;
- (id)label;
- (void)setValue:(id)arg0;
- (id)eventName;

@end