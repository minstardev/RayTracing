# Ray Tracing in One Weekend

## 빌드 방법

### Windows (Visual Studio)
```powershell
mkdir build
cmake -S . -B build
cmake --build build --config Debug          # Debug
cmake --build build --config Release        # Release

.\build\Release\RayTracingInOneWeekend.exe > output
```

### WSL2 / Linux / macOS
```bash
mkdir build && cd build
cmake ..
cmake --build .
./RayTracingInOneWeekend > output
```

## 진행 순서 메모
- [ ] Ch1,2: 기본 세팅 + PPM 출력
- [ ] Ch3: ray.h 추가
- [ ] Ch4: 구(sphere)와 광선 교차
- [ ] Ch5: 표면 노멀 + 다중 오브젝트 (hittable, hittable_list)
- [ ] Ch6: 안티에일리어싱
- [ ] Ch7: 확산 재질 (diffuse materials)
- [ ] Ch8: 그림자 여드름(shadow acne) 처리
- [ ] Ch9: 금속 재질
- [ ] Ch10: 유전체(dielectric) 재질
- [ ] Ch11: 카메라 위치/앵글 조정 (defocus blur)
- [ ] Ch12: 최종 장면 렌더링
