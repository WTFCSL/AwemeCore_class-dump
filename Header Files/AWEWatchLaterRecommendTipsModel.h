//
//     Generated by private class-dump
//

@class NSString;

@interface AWEWatchLaterRecommendTipsModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    long long _showTimeStamp;
    NSString *_text;
    NSString *_extra;
}

@property (nonatomic) long long type;
@property (nonatomic) long long showTimeStamp;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setShowTimeStamp:(long long)arg0;
- (long long)showTimeStamp;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (long long)type;
- (id)extra;
- (void)setType:(long long)arg0;
- (id)text;

@end
