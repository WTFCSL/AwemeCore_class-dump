//
//     Generated by private class-dump
//

@interface BDXBridgeFetchSessionInfoMethodResultModel : BDXBridgeModel {
    id _info;
    unsigned long long _id_existed;
}

@property (retain, nonatomic) id info;
@property (nonatomic) unsigned long long id_existed;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setId_existed:(unsigned long long)arg0;
- (unsigned long long)id_existed;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;

@end
