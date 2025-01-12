//
//     Generated by private class-dump
//

@class ACCSequenceAlbumHandler, NSString;

@interface ACCTrimCropSlidesPieceAdder : NSObject <ACCTrimCropPieceAddProtocol> {
    ACCSequenceAlbumHandler *_albumHandler;
}

@property (retain, nonatomic) ACCSequenceAlbumHandler *albumHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)albumHandler;
- (void)setAlbumHandler:(id)arg0;
- (void)addPieceWithWorkSpace:(id)arg0 serviceProvider:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;

@end
