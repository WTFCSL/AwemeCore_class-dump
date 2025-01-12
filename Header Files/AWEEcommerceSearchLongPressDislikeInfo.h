//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEEcommerceSearchLongPressDislikeInfo : MTLModel <MTLJSONSerializing> {
    NSString *_iconHeaderURLString;
    NSString *_dislikeReason;
    NSNumber *_dislikeID;
}

@property (copy, nonatomic) NSString *iconHeaderURLString;
@property (copy, nonatomic) NSString *dislikeReason;
@property (retain, nonatomic) NSNumber *dislikeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)dislikeID;
- (void)setDislikeID:(id)arg0;
- (id)iconHeaderURLString;
- (void)setIconHeaderURLString:(id)arg0;
- (id)dislikeReason;
- (void)setDislikeReason:(id)arg0;
- (void).cxx_destruct;

@end
