//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEServerFavoriteTagDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _isAhead;
    unsigned long long _type;
    NSString *_title;
    NSNumber *_count;
    NSNumber *_lastUpdateTime;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *lastUpdateTime;
@property (nonatomic) BOOL isAhead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isAhead;
- (void)setIsAhead:(BOOL)arg0;
- (void)setCount:(id)arg0;
- (id)lastUpdateTime;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (id)count;
- (void)setLastUpdateTime:(id)arg0;
- (void)setTitle:(id)arg0;

@end
