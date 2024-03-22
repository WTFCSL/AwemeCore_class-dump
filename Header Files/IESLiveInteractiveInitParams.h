//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface IESLiveInteractiveInitParams : NSObject {
    BOOL _isAuto;
    BOOL _passiveStart;
    int _uiLayout;
    NSNumber *_roomID;
    NSArray *_supportedScenes;
    unsigned long long _scene;
    unsigned long long _initSource;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSArray *supportedScenes;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) int uiLayout;
@property (nonatomic) unsigned long long initSource;
@property (nonatomic) BOOL passiveStart;

- (unsigned long long)initSource;
- (void)setUiLayout:(int)arg0;
- (id)mapToDictionary;
- (id)supportedScenes;
- (BOOL)passiveStart;
- (void)setSupportedScenes:(id)arg0;
- (void)setInitSource:(unsigned long long)arg0;
- (void)setPassiveStart:(BOOL)arg0;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)scene;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (BOOL)isAuto;
- (void)setIsAuto:(BOOL)arg0;
- (int)uiLayout;

@end
