//
//     Generated by private class-dump
//

@class NSString;

@interface RTVXRCapturePrivilegeToken : NSObject {
    BOOL _expired;
    NSString *_identifier;
    double _requestTimestamp;
    long long _captureDeviceType;
    NSString *_requestReason;
    NSString *_roomID;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) long long captureDeviceType;
@property (copy, nonatomic) NSString *requestReason;
@property (copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) BOOL expired;

+ (id)requestTokenWithCaptureDeviceType:(long long)arg0 reason:(id)arg1;

- (void)markExpired;
- (void).cxx_destruct;
- (long long)captureDeviceType;
- (void)setRequestReason:(id)arg0;
- (id)identifier;
- (id)requestReason;
- (void)setCaptureDeviceType:(long long)arg0;
- (id)description;
- (void)setIdentifier:(id)arg0;
- (BOOL)expired;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (double)requestTimestamp;
- (void)setRequestTimestamp:(double)arg0;
- (id)initWithType:(long long)arg0 reason:(id)arg1;

@end
