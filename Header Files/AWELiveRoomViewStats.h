//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveRoomViewStats : AWEBaseApiModel {
    BOOL _isHidden;
    BOOL _incremental;
    BOOL _isFromMessage;
    long long _displayVersion;
    long long _displayValue;
    long long _displayType;
    NSString *_displayMiddle;
    NSString *_displayLong;
}

@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL incremental;
@property (nonatomic) long long displayVersion;
@property (nonatomic) long long displayValue;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) NSString *displayMiddle;
@property (retain, nonatomic) NSString *displayLong;
@property (nonatomic) BOOL isFromMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (id)displayLong;
- (id)displayMiddle;
- (void)setDisplayMiddle:(id)arg0;
- (void)setDisplayLong:(id)arg0;
- (BOOL)isFromMessage;
- (void)setIsFromMessage:(BOOL)arg0;
- (void)setIsHidden:(BOOL)arg0;
- (long long)displayType;
- (void).cxx_destruct;
- (void)setDisplayType:(long long)arg0;
- (BOOL)isHidden;
- (long long)displayValue;
- (void)setDisplayValue:(long long)arg0;
- (BOOL)incremental;
- (void)setIncremental:(BOOL)arg0;
- (long long)displayVersion;
- (void)setDisplayVersion:(long long)arg0;

@end
