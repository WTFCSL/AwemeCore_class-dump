//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLiveEnterRoomLinkMicPopRoomInfo : MTLModel <MTLJSONSerializing> {
    NSNumber *_roomID;
    NSNumber *_authorID;
    NSString *_secAuthorID;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *authorID;
@property (retain, nonatomic) NSString *secAuthorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secAuthorID;
- (void)setSecAuthorID:(id)arg0;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;

@end
