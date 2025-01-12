//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSMutableDictionary;

@interface IESLiveEnterRoomBusinessParam : NSObject <NSCopying> {
    NSMutableDictionary *_clickParam;
    NSMutableDictionary *_firstShowParam;
    NSMutableDictionary *_commonParam;
    NSMutableDictionary *_jsonDictionary;
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *clickParam;
@property (readonly, nonatomic) NSDictionary *firstShowParam;
@property (readonly, nonatomic) NSDictionary *commonParam;
@property (readonly, nonatomic) NSString *jsonString;

- (id)commonParam;
- (void)addDictionary:(id)arg0 forOption:(unsigned long long)arg1;
- (void)removeParam:(id)arg0 forOption:(unsigned long long)arg1;
- (void)addDictionaryToJson:(id)arg0;
- (void)addJsonStringToJson:(id)arg0;
- (void)removeParamFromJson:(id)arg0;
- (void)cleanParamWithOption:(unsigned long long)arg0;
- (id)businessParamWithOption:(unsigned long long)arg0;
- (id)clickParam;
- (id)firstShowParam;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)type;
- (id)initWithType:(unsigned long long)arg0;
- (id)jsonString;

@end
