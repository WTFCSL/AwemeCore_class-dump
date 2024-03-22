//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface ACCDuetLayoutTrackModel : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    unsigned long long _switchType;
    NSArray *_shootAtList;
    NSArray *_duetLayoutList;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long switchType;
@property (retain, nonatomic) NSArray *shootAtList;
@property (retain, nonatomic) NSArray *duetLayoutList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)shootAtList;
- (void)setShootAtList:(id)arg0;
- (id)duetLayoutList;
- (void)setDuetLayoutList:(id)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (void)setSwitchType:(unsigned long long)arg0;
- (unsigned long long)switchType;

@end
