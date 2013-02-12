/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class CALayer;

@interface MKDotPositionView : MKPositionView {
    CALayer *_accuracyLayer;
    double _accuracyUpdateTime;
    CALayer *_bounceLayer;
    CALayer *_dotLayer;
    BOOL _enforceLowerBound;
    CALayer *_haloLayer;
}

@property(retain) CALayer *accuracyLayer; /* unknown property attribute: V_accuracyLayer */
@property(retain) CALayer *bounceLayer; /* unknown property attribute: V_bounceLayer */
@property(retain) CALayer *dotLayer; /* unknown property attribute: V_dotLayer */
@property(retain) CALayer *haloLayer; /* unknown property attribute: V_haloLayer */

+ (struct CGColor { }*)accuracyColor;
+ (float)accuracyDiameter:(float)arg1 level:(NSUInteger)arg2;
+ (id)bounceImages;
+ (id)dotImage;
+ (struct CGSize { float x1; float x2; })effectsSize;
+ (id)greyDotImage;
+ (id)haloImages;
+ (id)imagesWithStripImage:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2;
+ (void)initialize;
+ (id)layerName;

- (void)_didBeginZoom;
- (void)_didEndZoom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accuracyBounds;
- (id)accuracyLayer;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)bounceAnimation;
- (id)bounceLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)dotLayer;
- (id)haloAnimation;
- (id)haloLayer;
- (void)hideAccuracy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)playBounceAnimation;
- (void)setAccuracyLayer:(id)arg1;
- (void)setBounceLayer:(id)arg1;
- (void)setDotLayer:(id)arg1;
- (void)setHaloLayer:(id)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setZoomDirection:(NSInteger)arg1;
- (void)showAccuracy;
- (void)startEffects;
- (void)startHaloAnimation;
- (void)stopEffects;
- (void)stopHaloAnimation;
- (void)stopSizingAnimation;
- (void)updateBounds:(id)arg1 center:(id)arg2 duration:(double)arg3;

@end