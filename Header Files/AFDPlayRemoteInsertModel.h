//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AFDPlayRemoteInsertModel : AWEBaseApiModel {
    long long _index;
    NSString *_insertedAwemeID;
    long long _awemeType;
    AWEAwemeModel *_awemeModel;
    NSString *_awemeIDs;
}

@property (retain, nonatomic) NSString *insertedAwemeID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *awemeIDs;
@property (readonly, nonatomic) long long awemeType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (long long)awemeType;
- (id)initWithInsertedAwemeID:(id)arg0 type:(long long)arg1 index:(long long)arg2;
- (long long)compareInsertModel:(id)arg0;
- (id)insertedAwemeID;
- (void)setInsertedAwemeID:(id)arg0;
- (id)awemeIDs;
- (void)setAwemeIDs:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;

@end