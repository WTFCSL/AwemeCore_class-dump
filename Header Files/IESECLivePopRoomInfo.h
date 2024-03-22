//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLivePopRoomInfo : MTLModel <MTLJSONSerializing> {
    NSNumber *_virtualRoomID;
    NSString *_addressID;
    NSNumber *_addressType;
    NSString *_addressStrategyType;
    long long _roomType;
}

@property (retain, nonatomic) NSNumber *virtualRoomID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSNumber *addressType;
@property (retain, nonatomic) NSString *addressStrategyType;
@property (nonatomic) long long roomType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)roomType;
- (void)setRoomType:(long long)arg0;
- (id)virtualRoomID;
- (void)setVirtualRoomID:(id)arg0;
- (id)addressStrategyType;
- (void)setAddressStrategyType:(id)arg0;
- (void).cxx_destruct;
- (id)addressType;
- (void)setAddressType:(id)arg0;
- (id)addressID;
- (void)setAddressID:(id)arg0;

@end