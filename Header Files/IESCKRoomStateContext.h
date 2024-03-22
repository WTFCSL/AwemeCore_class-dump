//
//     Generated by private class-dump
//

@class NSString;

@interface IESCKRoomStateContext : NSObject {
    NSString *_roomId;
    long long _orientation;
    long long _roomType;
    long long _landscapeClearStatus;
    long long _clearStatus;
    long long _keyboardStatus;
}

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long orientation;
@property (nonatomic) long long roomType;
@property (nonatomic) long long landscapeClearStatus;
@property (nonatomic) long long clearStatus;
@property (nonatomic) long long keyboardStatus;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (long long)roomType;
- (void)setRoomType:(long long)arg0;
- (long long)clearStatus;
- (void)setClearStatus:(long long)arg0;
- (void)setLandscapeClearStatus:(long long)arg0;
- (long long)landscapeClearStatus;
- (long long)keyboardStatus;
- (void)setKeyboardStatus:(long long)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;

@end