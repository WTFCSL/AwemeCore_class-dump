//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECLiveAnchorBubbleItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_key;
    NSString *_text;
    NSNumber *_priority;
    NSNumber *_maxShowTime;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *maxShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setMaxShowTime:(id)arg0;
- (id)maxShowTime;
- (id)key;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setPriority:(id)arg0;
- (void)setKey:(id)arg0;
- (id)text;
- (id)priority;

@end
