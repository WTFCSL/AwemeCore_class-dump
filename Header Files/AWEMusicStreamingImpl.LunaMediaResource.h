//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaMediaResource : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ entity;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) void /* unknown type, empty encoding */ entity;

+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToFeedViewModel;
- (void)setEntity:(id)arg0;
- (id)entity;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)type;
- (id)id;
- (void)setType:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setId:(id)arg0;

@end
